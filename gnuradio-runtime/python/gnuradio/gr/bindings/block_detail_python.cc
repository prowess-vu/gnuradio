/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(block_detail.h)                                            */
/* BINDTOOL_HEADER_FILE_HASH(09cd02c6725bf3957d69184f80130c2c)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/block_detail.h>
#include <gnuradio/buffer.h>
#include <gnuradio/buffer_reader.h>
// pydoc.h is automatically generated in the build directory
#include <block_detail_pydoc.h>

void bind_block_detail(py::module& m)
{

    using block_detail = ::gr::block_detail;


    py::class_<block_detail, std::shared_ptr<block_detail>>(
        m, "block_detail", D(block_detail))


        .def("ninputs", &block_detail::ninputs, D(block_detail, ninputs))


        .def("noutputs", &block_detail::noutputs, D(block_detail, noutputs))


        .def("sink_p", &block_detail::sink_p, D(block_detail, sink_p))


        .def("source_p", &block_detail::source_p, D(block_detail, source_p))


        .def("set_done",
             &block_detail::set_done,
             py::arg("done"),
             D(block_detail, set_done))


        .def("done", &block_detail::done, D(block_detail, done))


        .def("set_input",
             &block_detail::set_input,
             py::arg("which"),
             py::arg("reader"),
             D(block_detail, set_input))


        .def("input", &block_detail::input, py::arg("which"), D(block_detail, input))


        .def("set_output",
             &block_detail::set_output,
             py::arg("which"),
             py::arg("buffer"),
             D(block_detail, set_output))


        .def("output", &block_detail::output, py::arg("which"), D(block_detail, output))


        .def("consume",
             &block_detail::consume,
             py::arg("which_input"),
             py::arg("how_many_items"),
             D(block_detail, consume))


        .def("consume_each",
             &block_detail::consume_each,
             py::arg("how_many_items"),
             D(block_detail, consume_each))


        .def("produce",
             &block_detail::produce,
             py::arg("which_output"),
             py::arg("how_many_items"),
             D(block_detail, produce))


        .def("produce_each",
             &block_detail::produce_each,
             py::arg("how_many_items"),
             D(block_detail, produce_each))


        .def("nitems_read",
             &block_detail::nitems_read,
             py::arg("which_input"),
             D(block_detail, nitems_read))


        .def("nitems_written",
             &block_detail::nitems_written,
             py::arg("which_output"),
             D(block_detail, nitems_written))


        .def("reset_nitem_counters",
             &block_detail::reset_nitem_counters,
             D(block_detail, reset_nitem_counters))


        .def("clear_tags", &block_detail::clear_tags, D(block_detail, clear_tags))


        .def("add_item_tag",
             &block_detail::add_item_tag,
             py::arg("which_output"),
             py::arg("tag"),
             D(block_detail, add_item_tag))


        .def("remove_item_tag",
             &block_detail::remove_item_tag,
             py::arg("which_input"),
             py::arg("tag"),
             py::arg("id"),
             D(block_detail, remove_item_tag))


        .def("get_tags_in_range",
             (void(block_detail::*)(std::vector<gr::tag_t, std::allocator<gr::tag_t>>&,
                                    unsigned int,
                                    uint64_t,
                                    uint64_t,
                                    long int)) &
                 block_detail::get_tags_in_range,
             py::arg("v"),
             py::arg("which_input"),
             py::arg("abs_start"),
             py::arg("abs_end"),
             py::arg("id"),
             D(block_detail, get_tags_in_range, 0))


        .def("get_tags_in_range",
             (void(block_detail::*)(std::vector<gr::tag_t, std::allocator<gr::tag_t>>&,
                                    unsigned int,
                                    uint64_t,
                                    uint64_t,
                                    pmt::pmt_t const&,
                                    long int)) &
                 block_detail::get_tags_in_range,
             py::arg("v"),
             py::arg("which_input"),
             py::arg("abs_start"),
             py::arg("abs_end"),
             py::arg("key"),
             py::arg("id"),
             D(block_detail, get_tags_in_range, 1))


        .def("set_processor_affinity",
             &block_detail::set_processor_affinity,
             py::arg("mask"),
             D(block_detail, set_processor_affinity))


        .def("unset_processor_affinity",
             &block_detail::unset_processor_affinity,
             D(block_detail, unset_processor_affinity))


        .def("enable_edf",
             &block_detail::enable_edf,
             py::arg("runtime_ns"),
             py::arg("deadline_ns"),
             py::arg("period_ns"),
             py::arg("reclaim_bandwidth"),
             D(block_detail, enable_edf))


        .def("thread_priority",
             &block_detail::thread_priority,
             D(block_detail, thread_priority))


        .def("set_thread_priority",
             &block_detail::set_thread_priority,
             py::arg("priority"),
             D(block_detail, set_thread_priority))


        .def("start_perf_counters",
             &block_detail::start_perf_counters,
             D(block_detail, start_perf_counters))


        .def("stop_perf_counters",
             &block_detail::stop_perf_counters,
             py::arg("noutput_items"),
             py::arg("nproduced"),
             D(block_detail, stop_perf_counters))


        .def("reset_perf_counters",
             &block_detail::reset_perf_counters,
             D(block_detail, reset_perf_counters))


        .def("pc_noutput_items",
             &block_detail::pc_noutput_items,
             D(block_detail, pc_noutput_items))


        .def("pc_nproduced", &block_detail::pc_nproduced, D(block_detail, pc_nproduced))


        .def("pc_input_buffers_full",
             (float(block_detail::*)(size_t)) & block_detail::pc_input_buffers_full,
             py::arg("which"),
             D(block_detail, pc_input_buffers_full, 0))


        .def("pc_input_buffers_full",
             (std::vector<float, std::allocator<float>>(block_detail::*)()) &
                 block_detail::pc_input_buffers_full,
             D(block_detail, pc_input_buffers_full, 1))


        .def("pc_output_buffers_full",
             (float(block_detail::*)(size_t)) & block_detail::pc_output_buffers_full,
             py::arg("which"),
             D(block_detail, pc_output_buffers_full, 0))


        .def("pc_output_buffers_full",
             (std::vector<float, std::allocator<float>>(block_detail::*)()) &
                 block_detail::pc_output_buffers_full,
             D(block_detail, pc_output_buffers_full, 1))


        .def("pc_work_time", &block_detail::pc_work_time, D(block_detail, pc_work_time))


        .def("pc_noutput_items_avg",
             &block_detail::pc_noutput_items_avg,
             D(block_detail, pc_noutput_items_avg))


        .def("pc_nproduced_avg",
             &block_detail::pc_nproduced_avg,
             D(block_detail, pc_nproduced_avg))


        .def("pc_input_buffers_full_avg",
             (float(block_detail::*)(size_t)) & block_detail::pc_input_buffers_full_avg,
             py::arg("which"),
             D(block_detail, pc_input_buffers_full_avg, 0))


        .def("pc_input_buffers_full_avg",
             (std::vector<float, std::allocator<float>>(block_detail::*)()) &
                 block_detail::pc_input_buffers_full_avg,
             D(block_detail, pc_input_buffers_full_avg, 1))


        .def("pc_output_buffers_full_avg",
             (float(block_detail::*)(size_t)) & block_detail::pc_output_buffers_full_avg,
             py::arg("which"),
             D(block_detail, pc_output_buffers_full_avg, 0))


        .def("pc_output_buffers_full_avg",
             (std::vector<float, std::allocator<float>>(block_detail::*)()) &
                 block_detail::pc_output_buffers_full_avg,
             D(block_detail, pc_output_buffers_full_avg, 1))


        .def("pc_work_time_avg",
             &block_detail::pc_work_time_avg,
             D(block_detail, pc_work_time_avg))


        .def("pc_throughput_avg",
             &block_detail::pc_throughput_avg,
             D(block_detail, pc_throughput_avg))


        .def("pc_noutput_items_var",
             &block_detail::pc_noutput_items_var,
             D(block_detail, pc_noutput_items_var))


        .def("pc_nproduced_var",
             &block_detail::pc_nproduced_var,
             D(block_detail, pc_nproduced_var))


        .def("pc_input_buffers_full_var",
             (float(block_detail::*)(size_t)) & block_detail::pc_input_buffers_full_var,
             py::arg("which"),
             D(block_detail, pc_input_buffers_full_var, 0))


        .def("pc_input_buffers_full_var",
             (std::vector<float, std::allocator<float>>(block_detail::*)()) &
                 block_detail::pc_input_buffers_full_var,
             D(block_detail, pc_input_buffers_full_var, 1))


        .def("pc_output_buffers_full_var",
             (float(block_detail::*)(size_t)) & block_detail::pc_output_buffers_full_var,
             py::arg("which"),
             D(block_detail, pc_output_buffers_full_var, 0))


        .def("pc_output_buffers_full_var",
             (std::vector<float, std::allocator<float>>(block_detail::*)()) &
                 block_detail::pc_output_buffers_full_var,
             D(block_detail, pc_output_buffers_full_var, 1))


        .def("pc_work_time_var",
             &block_detail::pc_work_time_var,
             D(block_detail, pc_work_time_var))


        .def("pc_work_time_total",
             &block_detail::pc_work_time_total,
             D(block_detail, pc_work_time_total))


        .def("consumed", &block_detail::consumed, D(block_detail, consumed))

        ;


    m.def("make_block_detail",
          &::gr::make_block_detail,
          py::arg("ninputs"),
          py::arg("noutputs"),
          D(make_block_detail));


    m.def("block_detail_ncurrently_allocated",
          &::gr::block_detail_ncurrently_allocated,
          D(block_detail_ncurrently_allocated));


    py::module m_thread = m.def_submodule("thread");


    py::module m_messages = m.def_submodule("messages");
}
