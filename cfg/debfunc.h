
#ifndef __DEBFUNC_H__
#define __DEBFUNC_H__

#	if DVERBOSELVL != 0
#		include <stdio.h>
#	endif

#	if !defined DVERBOSELVL || DVERBOSELVL == 0 || DVERBOSELVL > 3

#		define DEBUG_LOG_DECLARE ;
#		define DEBUG_LOG_INIT(fName, projectName) ;
#		define DEBUG_LOG(...) ;
#		define DEBUG_LOG_MESSAGE(...) ;
#		define DEBUG_LOG_WARNING(...) ;
#		define DEBUG_LOG_ERROR(...) ;
#		define DEBUG_LOG_FAILURE(...) ;
#	elif DVERBOSELVL == 1

#		define DEBUG_LOG_DECLARE ;
#		define DEBUG_LOG_INIT(fName, projectName) ;

#		define DEBUG_LOG(...)\
		printf(__VA_ARGS__);

#		define DEBUG_LOG_MESSAGE(...)\
		printf(__VA_ARGS__);

#		define DEBUG_LOG_WARNING(...)\
		printf(__VA_ARGS__);

#		define DEBUG_LOG_ERROR(...)\
		printf(__VA_ARGS__);

#		define DEBUG_LOG_FAILURE(...)\
		printf(__VA_ARGS__);



#	elif DVERBOSELVL == 2

		extern FILE* DEBUG_FILE_OUTPUT_C;

#		define DEBUG_LOG_DECLARE\
		FILE* DEBUG_FILE_OUTPUT_C;

#		define DEBUG_LOG_INIT(fName, projectName)\
		DEBUG_FILE_OUTPUT_C = fopen(fName, "w");\
		if (projectName)\
		{\
			fprintf(DEBUG_FILE_OUTPUT_C, "<?xml version=\"1.0\" encoding=\"utf-8\" standalone=\"yes\"?>");\
			fprintf(DEBUG_FILE_OUTPUT_C, "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">");\
			fprintf(DEBUG_FILE_OUTPUT_C, "<html><head>");\
			fprintf(DEBUG_FILE_OUTPUT_C, "<title>%s log file</title>", projectName);\
			fprintf(DEBUG_FILE_OUTPUT_C, "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\"/>");\
			fprintf(DEBUG_FILE_OUTPUT_C, "<style type=\"text/css\">");\
			fprintf(DEBUG_FILE_OUTPUT_C, "body { background: #1a242a; color: #b4c8d2; margin-right: 20px; margin-left: 20px; font-size: 14px; font-family: Arial, sans-serif, sans; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "a { text-decoration: none; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "a:link { color: #b4c8d2; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "a:active { color: #ff9900; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "a:visited { color: #b4c8d2; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "a:hover { color: #ff9900; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "h1 { text-align: center; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "h2 { color: #ffffff; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, ".m, .w, .e, .f { padding: 3px; overflow: auto; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, ".m { background-color: #080c10; color: #b4c8d2; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, ".w { background-color: #839ca7; color: #1a242a; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, ".e { background-color: #ff9933; color: #1a242a; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, ".f { background-color: #ff0000; color: #1a242a; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "</style></head><body>");\
			fprintf(DEBUG_FILE_OUTPUT_C, "<h1>%s log file</h1>", projectName);\
		}

#		define DEBUG_LOG(...)\
		fprintf(DEBUG_FILE_OUTPUT_C, __VA_ARGS__);

#		define DEBUG_LOG_MESSAGE(...)\
		fprintf(DEBUG_FILE_OUTPUT_C, "<div class=\"m\">");\
		fprintf(DEBUG_FILE_OUTPUT_C, __VA_ARGS__);\
		fprintf(DEBUG_FILE_OUTPUT_C, "</div>");

#		define DEBUG_LOG_WARNING(...)\
		fprintf(DEBUG_FILE_OUTPUT_C, "<div class=\"w\">");\
		fprintf(DEBUG_FILE_OUTPUT_C, __VA_ARGS__);\
		fprintf(DEBUG_FILE_OUTPUT_C, "</div>");

#		define DEBUG_LOG_ERROR(...)\
		fprintf(DEBUG_FILE_OUTPUT_C, "<div class=\"e\">");\
		fprintf(DEBUG_FILE_OUTPUT_C, __VA_ARGS__);\
		fprintf(DEBUG_FILE_OUTPUT_C, "</div>");

#		define DEBUG_LOG_FAILURE(...)\
		fprintf(DEBUG_FILE_OUTPUT_C, "<div class=\"f\">");\
		fprintf(DEBUG_FILE_OUTPUT_C, __VA_ARGS__);\
		fprintf(DEBUG_FILE_OUTPUT_C, "</div>");

#	elif DVERBOSELVL == 3

		extern FILE* DEBUG_FILE_OUTPUT_C;

#		define DEBUG_LOG_DECLARE\
		FILE* DEBUG_FILE_OUTPUT_C;

#		define DEBUG_LOG_INIT(fName, projectName)\
		DEBUG_FILE_OUTPUT_C = fopen(fName, "w");\
		if (projectName)\
		{\
			fprintf(DEBUG_FILE_OUTPUT_C, "<?xml version=\"1.0\" encoding=\"utf-8\" standalone=\"yes\"?>");\
			fprintf(DEBUG_FILE_OUTPUT_C, "<!DOCTYPE html PUBLIC \"-//W3C//DTD XHTML 1.0 Strict//EN\" \"http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd\">");\
			fprintf(DEBUG_FILE_OUTPUT_C, "<html><head>");\
			fprintf(DEBUG_FILE_OUTPUT_C, "<title>%s log file</title>", projectName);\
			fprintf(DEBUG_FILE_OUTPUT_C, "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\"/>");\
			fprintf(DEBUG_FILE_OUTPUT_C, "<style type=\"text/css\">");\
			fprintf(DEBUG_FILE_OUTPUT_C, "body { background: #1a242a; color: #b4c8d2; margin-right: 20px; margin-left: 20px; font-size: 14px; font-family: Arial, sans-serif, sans; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "a { text-decoration: none; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "a:link { color: #b4c8d2; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "a:active { color: #ff9900; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "a:visited { color: #b4c8d2; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "a:hover { color: #ff9900; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "h1 { text-align: center; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "h2 { color: #ffffff; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, ".m, .w, .e, .f { padding: 3px; overflow: auto; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, ".m { background-color: #080c10; color: #b4c8d2; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, ".w { background-color: #839ca7; color: #1a242a; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, ".e { background-color: #ff9933; color: #1a242a; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, ".f { background-color: #ff0000; color: #1a242a; }");\
			fprintf(DEBUG_FILE_OUTPUT_C, "</style></head><body>");\
			fprintf(DEBUG_FILE_OUTPUT_C, "<h1>%s log file</h1>", projectName);\
		}

#		define DEBUG_LOG(...)\
		printf(__VA_ARGS__);\
		fprintf(DEBUG_FILE_OUTPUT_C, __VA_ARGS__);\

#		define DEBUG_LOG_MESSAGE(...)\
		printf(__VA_ARGS__);\
		fprintf(DEBUG_FILE_OUTPUT_C, "<div class=\"m\">");\
		fprintf(DEBUG_FILE_OUTPUT_C, __VA_ARGS__);\
		fprintf(DEBUG_FILE_OUTPUT_C, "</div>");


#		define DEBUG_LOG_WARNING(...)\
		printf(__VA_ARGS__);\
		fprintf(DEBUG_FILE_OUTPUT_C, "<div class=\"w\">");\
		fprintf(DEBUG_FILE_OUTPUT_C, __VA_ARGS__);\
		fprintf(DEBUG_FILE_OUTPUT_C, "</div>");


#		define DEBUG_LOG_ERROR(...)\
		printf(__VA_ARGS__);\
		fprintf(DEBUG_FILE_OUTPUT_C, "<div class=\"e\">");\
		fprintf(DEBUG_FILE_OUTPUT_C, __VA_ARGS__);\
		fprintf(DEBUG_FILE_OUTPUT_C, "</div>");

#		define DEBUG_LOG_FAILURE(...)\
		printf(__VA_ARGS__);\
		fprintf(DEBUG_FILE_OUTPUT_C, "<div class=\"f\">");\
		fprintf(DEBUG_FILE_OUTPUT_C, __VA_ARGS__);\
		fprintf(DEBUG_FILE_OUTPUT_C, "</div>");

#	endif


#	if defined SPEED_TESTING_FUNC

#		if defined Linux || defined Mac

#			include <stdio.h>
#			include <sys/times.h>

#			define	INIT_TEST_FUNCION\
			int SPEED_TEST_FUNCION_i = 0;\
			struct tms SPEED_TEST_FUNCION_plop;\
			clock_t SPEED_TEST_FUNCION_time;


#			define	BRUTAL_TEST_FUNCION(function, iter)\
			SPEED_TEST_FUNCION_i = 0;\
			SPEED_TEST_FUNCION_time = times(&SPEED_TEST_FUNCION_plop);\
			while (SPEED_TEST_FUNCION_i < iter)\
			{\
				function;\
				SPEED_TEST_FUNCION_i += 1;\
			}\
			printf(	"func done in %lu ms\n",\
					times(&SPEED_TEST_FUNCION_plop) - SPEED_TEST_FUNCION_time);

#			define	BASIC_TEST_FUNCION(function)\
			SPEED_TEST_FUNCION_time = times(&SPEED_TEST_FUNCION_plop);\
			function;\
			printf(	"func done in %lu ms\n",\
					times(&SPEED_TEST_FUNCION_plop) - SPEED_TEST_FUNCION_time);

#		elif defined Windows

#			include <stdio.h>
#			include <WinDef.h>

#			define	INIT_TEST_FUNCION\
			int SPEED_TEST_FUNCION_i = 0;\
			DWORD SPEED_TEST_FUNCION_time = 0;


#			define	BRUTAL_TEST_FUNCION(function, iter)\
			SPEED_TEST_FUNCION_i = 0;\
			SPEED_TEST_FUNCION_time = GetTickCount();\
			while (SPEED_TEST_FUNCION_i < iter)\
			{\
				function;\
				SPEED_TEST_FUNCION_i += 1;\
			}\
			printf(	"func done in %d ms\n",\
					SPEED_TEST_FUNCION_time - GetTickCount());

#			define	BASIC_TEST_FUNCION(function)\
			SPEED_TEST_FUNCION_time = times(&SPEED_TEST_FUNCION_plop);\
			function;\
			printf(	"func done in %d ms\n",\
					SPEED_TEST_FUNCION_time - GetTickCount());

#		endif

#		else

#			define	INIT_TEST_FUNCION ;
#			define	BRUTAL_TEST_FUNCION(function, iter) ;
#			define	BASIC_TEST_FUNCION(function) ;

#	endif

#	ifndef NDEBUG

#		include <stdlib.h>

#		define	MYASSERT(expr, message)\
		if (!(expr))\
		{\
			DEBUG_LOG_FAILURE(message)\
			DEBUG_LOG_FAILURE("assertion \"%s\" failed in func: \"%s\"\n", #expr, __FUNCTION__);\
			abort();\
		}

#	else

#		define	MYASSERT(expr, message)

#	endif

#endif // __DEBFUNC_H__