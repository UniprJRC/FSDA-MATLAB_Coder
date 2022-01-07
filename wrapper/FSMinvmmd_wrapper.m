function [MMDinv]=FSMinvmmd_wrapper(mmd,v,n)

% Required input arguments

% mmd a vector double
assert(isa(mmd,'double'));
assert(all(size(mmd) <= [Inf Inf]));

% v a scalar double
assert(isa(v, 'double'));
assert(isscalar(v));


% Optional input arguments (name / pairs)

% n a scalar double
assert(isa(n, 'double'));
assert(isscalar(n));

%        n:     It specifies the size of the sample. Scalar. If it is not specified
%               it is set equal to mmd(end,1)+1.
%                 Example - 'n',5
%                 Data Types - double


[MMDinv] = FSMinvmmd(mmd, v, 'n', n);
end