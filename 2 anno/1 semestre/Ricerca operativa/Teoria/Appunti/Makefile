# Ricerca Operativa: appunti. Thin wrapper around latexmk (config in latexmkrc).
.PHONY: all watch clean distclean

all:          ## build build/main.pdf
	latexmk

watch:        ## rebuild on every save
	latexmk -pvc -view=none

clean:        ## remove intermediate files, keep the PDF
	latexmk -c

distclean:    ## remove the whole build folder
	rm -rf build
