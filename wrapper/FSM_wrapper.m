function [out]=FSM_wrapper(Y,  bonflev,crit,init,m0,msg,nocheck,rf)
% Wrapper function for LXS (when lms is a scalar). NV pair names are not taken as
% inputs. Instead, just the values are taken as inputs.

% Y: an array of doubles of any dimensions
assert(isa(Y,'double'));
assert(all(size(Y) <= [Inf Inf]));

% Optional input arguments (name / pairs) in (case insensitive)
% alphabetical order

% bonflev a scalar double or an empty value
assert(isa(bonflev, 'double'));
assert(all(size(bonflev) <= [1 1]));


% crit a char
% this char can only contain 
% 'md'  'biv', 'uni'
assert(isa(crit, 'char'));
assert(all(size(crit) <= [1 3]));

% init a scalar double
assert(isa(init, 'double'));
assert(isscalar(init));

% m0 a scalar/vector of any length (but smaller length(y)) double
assert(isa(m0,'double'));
assert(size(m0,2) == 1);

% msg is a boolean
assert(isa(msg, 'logical'));

% nocheck is a boolean
assert(isa(nocheck, 'logical'));

% rf: a scalar of type double
assert(isa(rf,'double'));
assert(isscalar(rf));


[out] = FSM(Y, ...
    'bonflev',bonflev,'crit',crit,'init',init,'m0',m0,'msg',msg,...
    'nocheck',nocheck,'rf',rf);

coder.cstructname(out,'struct_FSM_T');

end