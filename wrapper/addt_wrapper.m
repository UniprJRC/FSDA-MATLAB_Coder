function [out]=addt_wrapper(y,X,w, intercept,la,nocheck)
% Example wrapper function for addt. NV pair names are not taken as
% inputs. Instead, just the values are taken as inputs.

% Required input arguments
% y: a column vector of doubles of any length
% ARGS{1}{1} = coder.typeof(0,[Inf 1],[1 0]);
assert(isa(y,'double'));
assert(size(y,2) == 1);

% X: an array of doubles of any dimensions
% ARGS{1}{2} = coder.typeof(0,[Inf Inf],[1 1]);
assert(isa(X,'double'));
assert(all(size(X) <= [Inf Inf]));

% w: a column vector of doubles of any length
% ARGS{1}{3} = coder.typeof(0,[Inf 1],[1 0]);
assert(isa(w,'double'));
assert(size(w,2) == 1);

% Optional input arguments (name / pairs)

% intercept = a scalar boolean (first varargin)
% ARGS{1}{4} = coder.Constant('intercept');
% ARGS{1}{5} = coder.typeof(true);
assert(isa(intercept, 'logical'));


% la a scalar of type double or empty value (second varargin)
% ARGS{1}{6} = coder.Constant('la');
% ARGS{1}{7} = coder.typeof(1,[1 1],[1 1]);
assert(isa(la, 'double'));
assert(all(size(la) <= [1 1]));

% nocheck a logical
assert(isa(nocheck, 'logical'));

[out] = addt(y,X,w,'intercept',intercept,'la',la,'nocheck',nocheck);
end