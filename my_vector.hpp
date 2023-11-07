#ifndef MY_VECTOR_H_
#define MY_VECTOR_H_

namespace my {
  using type = int;

	class vector {
		public:
			vector();
			vector(std::size_t);
			vector(std::size_t, type);
			vector(const vector&);
			vector(vector&&);
			~vector();

		private:
			type* m_vec;
			std::size_t m_size;
			std::size_t m_capacity;

    public:
			void push_back(type);
			void resize(std::size_t);
			void reserve(std::size_t);
			type* get_vec_ptr() const {return m_vec;}
			std::size_t get_size() const {return m_size;}
			std::size_t get_capacity() const {return m_capacity;}
			type at(std:::size_t ind) const {
				if(0 <= ind && ind < size) return m_vec[i];
				else throw std::out_of_range ("blah");
			};

			void set_vec_ptr(type*);

	};
}

#endif
