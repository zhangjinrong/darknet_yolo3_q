#ifndef GEMM_H
#define GEMM_H
#include<stdint.h>

void gemm_bin(int M, int N, int K, float ALPHA, 
        char  *A, int lda, 
        float *B, int ldb,
        float *C, int ldc);
        
void gemm(int TA, int TB, int M, int N, int K, float ALPHA, 
                    float *A, int lda, 
                    float *B, int ldb,
                    float BETA,
                    float *C, int ldc);
void gemm_q(int TA, int TB, int M, int N, int K, float ALPHA, 
                int8_t *A, int lda, 
                int8_t *B, int ldb,
                float BETA,
                int32_t *C, int ldc);

void gemm_cpu(int TA, int TB, int M, int N, int K, float ALPHA, 
        float *A, int lda, 
        float *B, int ldb,
        float BETA,
        float *C, int ldc);
void gemm_cpu_q(int TA, int TB, int M, int N, int K, float ALPHA, 
        int8_t *A, int lda, 
        int8_t *B, int ldb,
        float BETA,
        int32_t *C, int ldc);

#ifdef GPU
void gemm_gpu(int TA, int TB, int M, int N, int K, float ALPHA, 
        float *A_gpu, int lda, 
        float *B_gpu, int ldb,
        float BETA,
        float *C_gpu, int ldc);

void gemm_gpu(int TA, int TB, int M, int N, int K, float ALPHA, 
        float *A, int lda, 
        float *B, int ldb,
        float BETA,
        float *C, int ldc);
#endif
#endif
