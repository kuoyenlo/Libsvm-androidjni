/*
 * Copyright (C) 2011 http://www.csie.ntu.edu.tw/~cjlin/libsvm/
 * Ported by likunarmstrong@gmail.com
 */

#ifndef SVM_PREDICT_H
#define SVM_PREDICT_H

int svmpredict(float **values, int **indices, int rowNum, int colNum,
        int predict_probability, const char *modelFile, int *labels);

#endif
