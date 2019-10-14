%option noyywrap
%{
/*****************声明和选项设置  begin*****************/
#include <stdio.h>
#include <stdlib.h>
#include "syntax_tree/SyntaxTree.h"
#include "lab1_lexical_analyzer/lexical_analyzer.h"
#include "common/common.h"

#ifndef LAB1_ONLY
#include "syntax_analyzer.h"
#endif

int files_count;
int lines;
int pos_start;
int pos_end;

/*****************声明和选项设置  end*****************/

%}

commentPattern "/*"([^\*]|(\*)*[^\*/])*(\*)*"*/"
identifierPattern [a-zA-Z][a-zA-Z]*

%%

 /******************TODO*********************/
 /****请在此补全所有flex的模式与动作  start******/
 
"+" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return ADD;}
"-" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return SUB;}
"*" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return MUL;}
"/" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return DIV;}
"<=" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return LTE;}
"<" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return LT;}
">=" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return GTE;}
">" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return GT;}
"!=" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return NEQ;}
"==" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return EQ;}
"=" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return ASSIN;}
";" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return SEMICOLON;}
"," {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return COMMA;}
"(" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return LPARENTHESE;}
")" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return RPARENTHESE;}
"[" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return LBRACKET;}
"]" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return RBRACKET;}
"{" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return LBRACE;}
"}" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return RBRACE;}
"else" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return ELSE;}
"if" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return IF;}
"int" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return INT;}
"return" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return RETURN;}
"void" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return VOID;}
"while" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return WHILE;}
"[]" {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return ARRAY;}
[a-zA-Z_]([a-zA-Z0-9_])* {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return IDENTIFIER;}
[0-9]+ {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifndef LAB1_ONLY
	yylval.node=newSyntaxTreeNode(yytext);
	#endif
	return NUMBER;}
"/*"([^\*]|(\*)*[^\*/])*(\*)*"*/" {pos_start=pos_end;
									pos_end+=strlen(yytext);
									#ifdef LAB1_ONLY 
									return COMMENT;
									#endif
								}
\n {
	pos_start=1;pos_end=1;lines+=1;
	#ifdef LAB1_ONLY 
	return EOL;
	#endif
	}

[" ""\t"] {pos_start=pos_end;pos_end+=strlen(yytext);
	#ifdef LAB1_ONLY 
	return BLANK;
	#endif


}


. {return ERROR;}



 /****请在此补全所有flex的模式与动作  end******/
%%
/****************C代码 start*************/

/// \brief analysize a *.cminus file
///
///	\param input_file_name
/// \param output_file_name
void analyzer(char* input_file_name, char* output_file_name){
	char input_path[256] = "./testcase/";
	strcat(input_path, input_file_name);
	char output_path[256] = "./tokens/";
	strcat(output_path, output_file_name);
	if(!(yyin = fopen(input_path,"r"))){
		printf("[ERR] No input file\n");
		exit(1);
	}
	printf("[START]: Read from: %s\n", input_file_name);
	FILE *fp = fopen(output_path,"w+");
	int token;
	lines=1;
	pos_start=1;
	pos_end=1;
	while(token = yylex()){
		switch(token){
			case ERROR:
				fprintf(fp, "[ERR]: unable to analysize %s at %d line, from %d to %d\n", yytext, lines, pos_start, pos_end);
				break;
			case COMMENT:
				for(int i=0;i<strlen(yytext);i++)
				{
					if(yytext[i]=='\n')
					{
						lines++;
						pos_end=strlen(yytext)-i;
					}
					
					
				}
				break;
			case BLANK:
				break;
			case EOL:
				break;
			default :
				fprintf(fp, "%s\t%d\t%d\t%d\t%d\n",yytext, token, lines, pos_start, pos_end);
		}
	}
	fclose(fp);
	printf("[END]: Analysis completed.\n");
}

/// \brief get all file paths under 'testcase' directory
///
/// under 'testcase' directory, there could be many *.cminus files.
/// \todo student should fill this function


/// \brief process all *.cminus file
///
/// note that: use relative path for all i/o operations
int lex_main(int argc, char **argv){
	char filename[50][256];
	char output_file_name[256];
	char suffix[] = ".tokens";
	files_count = getAllTestcase(filename);
	for(int i = 0; i < files_count; i++){
	    strncpy(output_file_name,filename[i],strlen(filename[i])-7);
		output_file_name[strlen(filename[i])-7]='\0';
		strcat(output_file_name,suffix);
	    analyzer(filename[i],output_file_name);
	}

	return 0;
}
/****************C代码 end*************/
