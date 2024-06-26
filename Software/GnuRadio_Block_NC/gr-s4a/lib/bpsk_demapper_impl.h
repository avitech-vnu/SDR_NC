/******************************************************************************
 *
 * 							SDR4All Toolbox (a.k.a Tools4SDR)
 *
 * 							http://www.flexible-radio.com
 *
 ******************************************************************************/
#ifndef INCLUDED_S4A_BPSK_DEMAPPER_IMPL_H
#define INCLUDED_S4A_BPSK_DEMAPPER_IMPL_H

#include <s4a/bpsk_demapper.h>

namespace gr
{
namespace s4a
{

class bpsk_demapper_impl: public bpsk_demapper
{
private:
	int d_i;
	char d_byte;
	int d_one;
	int d_zero;

public:
	bpsk_demapper_impl();
	~bpsk_demapper_impl();

	// Where all the action really happens
	void forecast(int noutput_items, gr_vector_int &ninput_items_required);

	int general_work(int noutput_items, gr_vector_int &ninput_items_v,
			gr_vector_const_void_star &input_items,
			gr_vector_void_star &output_items);
};

} // namespace s4a
} // namespace gr

#endif /* INCLUDED_S4A_BPSK_DEMAPPER_IMPL_H */

