function [out,C]=LXS_wrapper(y,X,  bonflevoutX,conflev,h,intercept,lms,msg,nocheck,nomes,nsamp,rew,yxsave)
% Wrapper function for LXS (when lms is a scalar). NV pair names are not taken as
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

% Optional input arguments (name / pairs) in (case insensitive)
% alphabetical order

% bonflevoutX a scalar double or an empty value
assert(isa(bonflevoutX, 'double'));
assert(all(size(bonflevoutX) <= [1 1]));

% conflev a scalar double
assert(isa(conflev, 'double'));
assert(isscalar(conflev));

% h a scalar double
assert(isa(h, 'double'));
assert(isscalar(h));

% intercept
assert(isa(intercept, 'logical'));

% nocheck is a boolean
assert(isa(nocheck, 'logical'));

% lms: a scalar of type double
assert(isa(lms,'double'));
assert(isscalar(lms));

% msg is a boolean
assert(isa(msg,'logical'));
assert(isscalar(msg));

% nomes is a boolean
assert(isa(nomes, 'logical'));

% nsamp: a scalar of type double
assert(isa(nsamp,'double'));
assert(isscalar(nsamp));

% rew is a boolean
assert(isa(rew, 'logical'));

% yxsave is a boolean
assert(isa(yxsave, 'logical'));

[out,C] = LXS(y,X, ...
    'bonflevoutX',bonflevoutX,'conflev',conflev,'h',h,'intercept',intercept,'lms',lms,...
    'nocheck',nocheck,'msg',msg,'nomes',nomes,'nsamp',nsamp','rew',rew,'yxsave',yxsave);
end