class ArrayBuilder {
};

template <typename Type>
class PrimitiveBuilder : public ArrayBuilder {
 public:
  /// \brief The C type adequate for appending and representing data
  using value_type = typename Type::c_type;
};

template <typename T>
class NumericBuilder : public PrimitiveBuilder<T> {
 public:
  using typename PrimitiveBuilder<T>::value_type;
};
