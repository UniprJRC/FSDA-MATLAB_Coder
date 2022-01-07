function [FSRinv]=FSRinvmdr_wrapper(mdr,p,n)

% Required input arguments

% mmd a vector double
assert(isa(mdr,'double'));
assert(all(size(mdr) <= [Inf Inf]));

% v a scalar double
assert(isa(p, 'double'));
assert(isscalar(p));


% Optional input arguments (name / pairs)

% n a scalar double
assert(isa(n, 'double'));
assert(isscalar(n));

%        n:     It specifies the size of the sample. Scalar. If it is not specified
%               it is set equal to mdr(end,1)+1.
%                 Example - 'n',5
%                 Data Types - double


[FSRinv] = FSRinvmdr(mdr, p, 'n', n);
end