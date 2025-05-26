grammar myGrammar;

WS: [ \t\r\n]+ -> skip ;

LINE_COMMENT: '//' ~[\r\n]* -> skip ;
BLOCK_COMMENT: '/*' .*? '*/' -> skip ;

KW_LET: 'let' ;
KW_IF: 'if' ;
KW_ELSE: 'else' ;
KW_WHILE: 'while' ;
KW_PRINT: 'print' ;
KW_TRUE: 'true' ;
KW_FALSE: 'false' ;
KW_NULL: 'null' ;
KW_FUNC: 'func' ;
KW_RETURN: 'return';

NUMBER: [0-9]+ ;
STRING: '"' (ESC | ~["\\])* '"' ;
fragment ESC: '\\' ( 'b' | 't' | 'n' | 'f' | 'r' | '"' | '\'' | '\\' ) ;

ID: [a-zA-Z_][a-zA-Z0-9_]* ;

LPAREN: '(' ;
RPAREN: ')' ;
LBRACE: '{' ;
RBRACE: '}' ;
COMMA: ',' ;
SEMICOLON: ';' ;
ASSIGN: '=' ;

ADD: '+' ;
SUB: '-' ;
MUL: '*' ;
DIV: '/' ;

EQ: '==' ;
NEQ: '!=' ;
LT: '<' ;
LE: '<=' ;
GT: '>' ;
GE: '>=' ;

AND: '&&' | 'and' ;
OR: '||' | 'or' ;
NOT: '!'  | 'not' ;


prog: (statement SEMICOLON)* EOF ;

statement: declaration_stmt
    | assignment_stmt
    | print_stmt
    | if_stmt
    | while_stmt
    | block_stmt
    | func_decl_stmt
    | return_stmt
    | expr
    ;

block_stmt: LBRACE (statement SEMICOLON)* RBRACE ;

declaration_stmt: KW_LET name=ID (ASSIGN value=expr)? ;

assignment_stmt: name=ID ASSIGN value=expr ;

print_stmt: KW_PRINT value=expr ;

if_stmt: KW_IF LPAREN condition=expr RPAREN thenBlock=block_stmt (KW_ELSE elseBlock=block_stmt)? ;

while_stmt: KW_WHILE LPAREN condition=expr RPAREN body=block_stmt ;

func_decl_stmt: KW_FUNC name=ID LPAREN (params+=ID (COMMA params+=ID)*)? RPAREN body=block_stmt ;

return_stmt: KW_RETURN value=expr? ;

expr : expr op=OR expr
     | expr op=AND expr
     | NOT expr
     | expr op=(EQ | NEQ) expr
     | expr op=(LT | LE | GT | GE) expr
     | expr op=(ADD | SUB) expr
     | expr op=(MUL | DIV) expr
     | name=ID LPAREN (args+=expr (COMMA args+=expr)*)? RPAREN
     | name=ID
     | NUMBER
     | STRING
     | KW_TRUE
     | KW_FALSE
     | KW_NULL
     | LPAREN expr RPAREN
     ;