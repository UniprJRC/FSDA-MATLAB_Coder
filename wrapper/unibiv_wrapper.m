function [fre]=unibiv_wrapper(Y,  madcoef,robscale,rf)
% Wrapper function for FSM. NV pair names are not taken as
% inputs. Instead, just the values are taken as inputs.

% Y: an array of doubles of any dimensions
assert(isa(Y,'double'));
assert(all(size(Y) <= [Inf Inf]));

% Optional input arguments (name / pairs) in (case insensitive)
% alphabetical order

% robscale a scalar double
assert(isa(madcoef, 'double'));
assert(isscalar(madcoef));

% robscale a scalar double
assert(isa(robscale, 'double'));
assert(isscalar(robscale));

% rf: a scalar of type double
assert(isa(rf,'double'));
assert(isscalar(rf));


[fre] = unibiv(Y,'madcoef',madcoef,'robscale',robscale,'rf',rf);

end