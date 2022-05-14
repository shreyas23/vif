int corr_cuda_forward(THCudaTensor *input1,
                      THCudaTensor *input2,
                      THCudaTensor *rbot1,
                      THCudaTensor *rbot2,
                      THCudaTensor *output,
                      int pad_size,
                      int kernel_size,
                      int max_displacement,
                      int stride1,
                      int stride2,
                      int corr_type_multiply);

int corr_cuda_backward(THCudaTensor *input1,
                       THCudaTensor *input2,
                       THCudaTensor *rbot1,
                       THCudaTensor *rbot2,
                       THCudaTensor *grad_output,
                       THCudaTensor *grad_input1,
                       THCudaTensor *grad_input2,
                       int pad_size,
                       int kernel_size,
                       int max_displacement,
                       int stride1,
                       int stride2,
                       int corr_type_multiply);
