function [out]=FSRfan_wrapper(y,X,   intercept,nocheck,la,h,nsamp,lms,init,family,msg)
% Wrapper function for FSRfan. NV pair names are not taken as
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


% Optional input arguments (name / pairs)
% intercept
assert(isa(intercept, 'logical'));

% Optional input arguments (name / pairs)
% nocheck is a boolean
assert(isa(nocheck, 'logical'));

% la: a column vector of doubles of any length
assert(isa(la,'double'));
assert(size(la,2) == 1);

% h a scalar double
assert(isa(h, 'double'));
assert(isscalar(h));

% nsamp: a scalar of type double
assert(isa(nsamp,'double'));
assert(isscalar(nsamp));

% lms: an array of doubles of any dimensions
% even if generally will be just a scalar of type double
assert(isa(lms,'double'));
assert(all(size(lms) <= [Inf Inf]));

% init a scalar double
assert(isa(init, 'double'));
assert(isscalar(init));

% family a char
% this char can only contain 
% 'BoxCox'  'YJ', 'YJpn' or 'YJall'.
% This is something to ask RL
assert(isa(family, 'char'));
% assert(size(family,1) == 1);
% assert(all(size(family) <= [Inf Inf]));
assert(all(size(family) <= [1 Inf]));


% msg is a boolean
assert(isa(msg, 'logical'));


[out] = FSRfan(y,X, ...
    'intercept',intercept,'nocheck',nocheck,'la',la,'h',h,...
    'nsamp',nsamp,'lms',lms,'init',init','family',family,'msg',msg);

coder.cstructname(out,'struct_FSRfan_T');
end