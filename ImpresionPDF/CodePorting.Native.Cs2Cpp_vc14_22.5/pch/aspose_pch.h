// Automatically generated by CMake
#pragma once

#include <defines.h>
#include <detail.h>
#include <fwd.h>
#include <system/action.h>
#include <system/array.h>
#include <system/array_segment.h>
#include <system/aspose_cpp_library.h>
#include <system/async_callback.h>
#include <system/attribute.h>
#include <system/bad_image_fromat_exception.h>
#include <system/bit_converter.h>
#include <system/bit_converter_le.h>
#include <system/boolean.h>
#include <system/boxable_traits.h>
#include <system/boxed_enum.h>
#include <system/boxed_value.h>
#include <system/boxed_value_impl.h>
#include <system/buffer.h>
#include <system/byte.h>
#include <system/char.h>
#include <system/collections/algorithms.h>
#include <system/collections/arraylist.h>
#include <system/collections/base_dictionary.h>
#include <system/collections/base_enumerator.h>
#include <system/collections/base_kv_collection.h>
#include <system/collections/bitarray.h>
#include <system/collections/collection_base.h>
#include <system/collections/concurrent/concurrent_dictionary.h>
#include <system/collections/dictionary.h>
#include <system/collections/enumerable_ext.h>
#include <system/collections/hash_dictionary.h>
#include <system/collections/hashset.h>
#include <system/collections/icollection.h>
#include <system/collections/icollection_ng.h>
#include <system/collections/icomparer.h>
#include <system/collections/idictionary.h>
#include <system/collections/ienumerable.h>
#include <system/collections/ienumerable_ng.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerator_impl.h>
#include <system/collections/ienumerator_ng.h>
#include <system/collections/iequality_comparer.h>
#include <system/collections/ikvcollection.h>
#include <system/collections/ilist.h>
#include <system/collections/ilist_impl.h>
#include <system/collections/ilist_ng.h>
#include <system/collections/ilist_wrapper.h>
#include <system/collections/invalidatable.h>
#include <system/collections/iset.h>
#include <system/collections/keyvalue_collection.h>
#include <system/collections/keyvalue_list.h>
#include <system/collections/keyvalue_pair.h>
#include <system/collections/linkedlist.h>
#include <system/collections/list.h>
#include <system/collections/list_ext.h>
#include <system/collections/object_model/collection.h>
#include <system/collections/object_model/keyed_collection.h>
#include <system/collections/queue.h>
#include <system/collections/read_only_collection.h>
#include <system/collections/sorted_dictionary.h>
#include <system/collections/sorted_list.h>
#include <system/collections/specialized/bit_vector_32.h>
#include <system/collections/specialized/name_value_collection.h>
#include <system/collections/specialized/string_collection.h>
#include <system/collections/specialized/string_dictionary.h>
#include <system/collections/stack.h>
#include <system/collections/virtualized_iterator.h>
#include <system/comparison.h>
#include <system/component_model/async_completed_event_args.h>
#include <system/component_model/background_worker.h>
#include <system/component_model/cancel_event_args.h>
#include <system/component_model/component.h>
#include <system/component_model/container.h>
#include <system/component_model/design/serialization/instance_descriptor.h>
#include <system/component_model/do_work_event_args.h>
#include <system/component_model/enum_converter.h>
#include <system/component_model/icomponent.h>
#include <system/component_model/icontainer.h>
#include <system/component_model/itype_descriptor_context.h>
#include <system/component_model/progress_changed_event_args.h>
#include <system/component_model/property_changed_event_args.h>
#include <system/component_model/property_changed_event_handler.h>
#include <system/component_model/run_worker_completed_event_args.h>
#include <system/component_model/type_converter.h>
#include <system/component_model/type_descriptor.h>
#include <system/component_model/win_32_exception.h>
#include <system/console.h>
#include <system/constraints.h>
#include <system/convert.h>
#include <system/converter.h>
#include <system/cycles_detection.h>
#include <system/date_time.h>
#include <system/date_time_kind.h>
#include <system/date_time_offset.h>
#include <system/day_of_week.h>
#include <system/db_null.h>
#include <system/debug/chain_element.h>
#include <system/decimal.h>
#include <system/default.h>
#include <system/delegate.h>
#include <system/details/apply.h>
#include <system/details/array_view.h>
#include <system/details/call_once.h>
#include <system/details/cast_int_operators.h>
#include <system/details/cast_rules.h>
#include <system/details/collections_helper.h>
#include <system/details/comparer_type.h>
#include <system/details/dbg_garbage_collection.h>
#include <system/details/dbg_tools.h>
#include <system/details/delegate_holding_variables.h>
#include <system/details/demangle.h>
#include <system/details/dispose_guard.h>
#include <system/details/enum_meta_info.h>
#include <system/details/equality_helper.h>
#include <system/details/exceptions_holder.h>
#include <system/details/fast_equals.h>
#include <system/details/for_each_member_visitor.h>
#include <system/details/force_copy_constructor.h>
#include <system/details/format_builder.h>
#include <system/details/format_parser.h>
#include <system/details/gc_wrapper.h>
#include <system/details/has_tostring.h>
#include <system/details/hash_function.h>
#include <system/details/hash_quality_checker.h>
#include <system/details/held_variables.h>
#include <system/details/icu_namespace.h>
#include <system/details/is_defined.h>
#include <system/details/is_forwarding_of.h>
#include <system/details/is_lambda.h>
#include <system/details/is_template_base_of.h>
#include <system/details/lambda_capture_holder.h>
#include <system/details/lazy.h>
#include <system/details/leakage_detector.h>
#include <system/details/leakage_detector_config.h>
#include <system/details/lock_context.h>
#include <system/details/makeobject_leakage_detector.h>
#include <system/details/objects_bag.h>
#include <system/details/optional.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/details/porter.h>
#include <system/details/shared_lockable.h>
#include <system/details/shared_members_t.h>
#include <system/details/spin_lock.h>
#include <system/details/stack_array.h>
#include <system/details/synchronized_value.h>
#include <system/details/this_protector.h>
#include <system/details/value_init.h>
#include <system/details/win_resource_stream.h>
#include <system/details_exception_with_error_code.h>
#include <system/details_exception_with_filename.h>
#include <system/diagnostics/debug.h>
#include <system/diagnostics/debugger.h>
#include <system/diagnostics/file_version_info.h>
#include <system/diagnostics/performance_counter.h>
#include <system/diagnostics/process.h>
#include <system/diagnostics/process_start_info.h>
#include <system/diagnostics/process_window_style.h>
#include <system/diagnostics/stack_frame.h>
#include <system/diagnostics/stack_trace.h>
#include <system/diagnostics/stopwatch.h>
#include <system/diagnostics/trace.h>
#include <system/diagnostics/trace_event_type.h>
#include <system/diagnostics/trace_level.h>
#include <system/diagnostics/trace_listener.h>
#include <system/do_try_finally.h>
#include <system/double.h>
#include <system/dummy_classes.h>
#include <system/dynamic_weak_ptr.h>
#include <system/enum.h>
#include <system/enum_helpers.h>
#include <system/enumerator_adapter.h>
#include <system/environment.h>
#include <system/event.h>
#include <system/eventargs.h>
#include <system/eventhandler.h>
#include <system/exception.h>
#include <system/exceptions.h>
#include <system/func.h>
#include <system/gc.h>
#include <system/get_hash_code.h>
#include <system/globalization/calendar.h>
#include <system/globalization/calendar_algorithm_type.h>
#include <system/globalization/calendar_week_rule.h>
#include <system/globalization/char_unicode_info.h>
#include <system/globalization/chinese_lunisolar_calendar.h>
#include <system/globalization/compare_info.h>
#include <system/globalization/compare_options.h>
#include <system/globalization/culture_info.h>
#include <system/globalization/culture_types.h>
#include <system/globalization/date_time_format_info.h>
#include <system/globalization/date_time_styles.h>
#include <system/globalization/daylight_time.h>
#include <system/globalization/details/calendar_id.h>
#include <system/globalization/details/culture_data_ptr.h>
#include <system/globalization/details/date_time_format_data_ptr.h>
#include <system/globalization/details/date_time_format_flags.h>
#include <system/globalization/details/gregorian_calendar_utils.h>
#include <system/globalization/details/number_format_data_ptr.h>
#include <system/globalization/details/region_data_ptr.h>
#include <system/globalization/digit_shapes.h>
#include <system/globalization/east_asian_lunisolar_calendar.h>
#include <system/globalization/globalization_extensions.h>
#include <system/globalization/gregorian_calendar.h>
#include <system/globalization/gregorian_calendar_types.h>
#include <system/globalization/hebrew_calendar.h>
#include <system/globalization/hijri_calendar.h>
#include <system/globalization/idn_mapping.h>
#include <system/globalization/japanese_calendar.h>
#include <system/globalization/japanese_lunisolar_calendar.h>
#include <system/globalization/julian_calendar.h>
#include <system/globalization/korean_calendar.h>
#include <system/globalization/korean_lunisolar_calendar.h>
#include <system/globalization/number_format_info.h>
#include <system/globalization/number_styles.h>
#include <system/globalization/persian_calendar.h>
#include <system/globalization/region_info.h>
#include <system/globalization/sort_key.h>
#include <system/globalization/sort_version.h>
#include <system/globalization/string_info.h>
#include <system/globalization/taiwan_calendar.h>
#include <system/globalization/taiwan_lunisolar_calendar.h>
#include <system/globalization/text_element_enumerator.h>
#include <system/globalization/text_info.h>
#include <system/globalization/thai_buddhist_calendar.h>
#include <system/globalization/time_span_styles.h>
#include <system/globalization/um_al_qura_calendar.h>
#include <system/globalization/unicode_category.h>
#include <system/guid.h>
#include <system/holder_initializer.h>
#include <system/iasyncresult.h>
#include <system/icloneable.h>
#include <system/icomparable.h>
#include <system/iconvertible.h>
#include <system/icustomformatter.h>
#include <system/idisposable.h>
#include <system/iequatable.h>
#include <system/iformatprovider.h>
#include <system/iformattable.h>
#include <system/int16.h>
#include <system/int32.h>
#include <system/int64.h>
#include <system/io/binary_reader.h>
#include <system/io/binary_writer.h>
#include <system/io/buffered_stream.h>
#include <system/io/compression/brotli_stream.h>
#include <system/io/compression/compression_level.h>
#include <system/io/compression/compression_mode.h>
#include <system/io/compression/deflate_stream.h>
#include <system/io/compression/details/brotli_stream.h>
#include <system/io/compression/details/crc32.h>
#include <system/io/compression/details/deflate_stream.h>
#include <system/io/compression/details/exceptions.h>
#include <system/io/compression/details/flush_type.h>
#include <system/io/compression/details/gzip_stream.h>
#include <system/io/compression/details/zlib_base_stream.h>
#include <system/io/compression/details/zlib_codec.h>
#include <system/io/compression/details/zlib_compression_flags.h>
#include <system/io/compression/details/zlib_constants.h>
#include <system/io/compression/details/zlib_stream.h>
#include <system/io/compression/gzip_stream.h>
#include <system/io/directory.h>
#include <system/io/directory_info.h>
#include <system/io/file.h>
#include <system/io/file_access.h>
#include <system/io/file_attributes.h>
#include <system/io/file_info.h>
#include <system/io/file_mode.h>
#include <system/io/file_not_found_exception.h>
#include <system/io/file_options.h>
#include <system/io/file_share.h>
#include <system/io/file_stream.h>
#include <system/io/file_system_info.h>
#include <system/io/memory_stream.h>
#include <system/io/path.h>
#include <system/io/search_option.h>
#include <system/io/seekorigin.h>
#include <system/io/std_stream_wrappers.h>
#include <system/io/stream.h>
#include <system/io/stream_reader.h>
#include <system/io/stream_writer.h>
#include <system/io/string_reader.h>
#include <system/io/string_writer.h>
#include <system/io/system_stream_wrappers.h>
#include <system/io/text_reader.h>
#include <system/io/text_writer.h>
#include <system/io/unmanaged_memory_stream.h>
#include <system/linq/enumerable.h>
#include <system/linq/igrouping.h>
#include <system/make_const_ref.h>
#include <system/marshal_by_ref_object.h>
#include <system/math.h>
#include <system/memory_management.h>
#include <system/midpoint_rounding.h>
#include <system/multi_array.h>
#include <system/multicast_delegate.h>
#include <system/nullable.h>
#include <system/object.h>
#include <system/object_ext.h>
#include <system/operating_system.h>
#include <system/platform_id.h>
#include <system/predicate.h>
#include <system/primitive_types.h>
#include <system/random.h>
#include <system/refcount.h>
#include <system/reflection.h>
#include <system/reflection/assembly.h>
#include <system/reflection/assembly_name.h>
#include <system/reflection/assembly_type_registration.h>
#include <system/reflection/binding_flags.h>
#include <system/reflection/constructor_info.h>
#include <system/reflection/field_attributes.h>
#include <system/reflection/field_info.h>
#include <system/reflection/member_info.h>
#include <system/reflection/member_types.h>
#include <system/reflection/method_base.h>
#include <system/reflection/method_info.h>
#include <system/reflection/property_info.h>
#include <system/reflection/reflection_type_load_exception.h>
#include <system/reflection/target_invocation_exception.h>
#include <system/reflection_seprt.h>
#include <system/resources/resource_manager.h>
#include <system/runtime/compiler_services/ituple.h>
#include <system/runtime/interop_services/external_exception.h>
#include <system/runtime/interop_services/file_time.h>
#include <system/runtime/interop_services/gc_handle_type.h>
#include <system/runtime/interop_services/marshal.h>
#include <system/runtime/interop_services/var_enum.h>
#include <system/runtime/serialization/formatter_converter.h>
#include <system/runtime/serialization/i_formatter_converter.h>
#include <system/runtime/serialization/iserializable.h>
#include <system/runtime/serialization/serialization_info.h>
#include <system/runtime/serialization/streaming_context.h>
#include <system/sbyte.h>
#include <system/scope_guard.h>
#include <system/security/secure_string.h>
#include <system/security/secure_string_marshal.h>
#include <system/select_type.h>
#include <system/setters_wrap.h>
#include <system/shared_ptr.h>
#include <system/single.h>
#include <system/smart_ptr.h>
#include <system/smart_ptr_counter.h>
#include <system/special_casts.h>
#include <system/string.h>
#include <system/string_comparer.h>
#include <system/string_comparison.h>
#include <system/string_extra.h>
#include <system/test_tools/compare.h>
#include <system/test_tools/globalization.h>
#include <system/test_tools/method_argument_tuple.h>
#include <system/test_tools/test_tools.h>
#include <system/test_tools/test_tools_ext.h>
#include <system/text/ascii_encoding.h>
#include <system/text/decoder.h>
#include <system/text/decoder_exception_fallback.h>
#include <system/text/decoder_exception_fallback_buffer.h>
#include <system/text/decoder_fallback.h>
#include <system/text/decoder_fallback_buffer.h>
#include <system/text/decoder_fallback_exception.h>
#include <system/text/decoder_replacement_fallback.h>
#include <system/text/decoder_replacement_fallback_buffer.h>
#include <system/text/encoder.h>
#include <system/text/encoder_exception_fallback.h>
#include <system/text/encoder_exception_fallback_buffer.h>
#include <system/text/encoder_fallback.h>
#include <system/text/encoder_fallback_buffer.h>
#include <system/text/encoder_fallback_exception.h>
#include <system/text/encoder_replacement_fallback.h>
#include <system/text/encoder_replacement_fallback_buffer.h>
#include <system/text/encoding.h>
#include <system/text/encoding_decoder.h>
#include <system/text/encoding_encoder.h>
#include <system/text/icu_decoder.h>
#include <system/text/icu_encoder.h>
#include <system/text/icu_encoding.h>
#include <system/text/latin1_encoding.h>
#include <system/text/normalization_form.h>
#include <system/text/regularexpressions/capture.h>
#include <system/text/regularexpressions/capture_collection.h>
#include <system/text/regularexpressions/group.h>
#include <system/text/regularexpressions/group_collection.h>
#include <system/text/regularexpressions/match.h>
#include <system/text/regularexpressions/match_collection.h>
#include <system/text/regularexpressions/regex.h>
#include <system/text/regularexpressions/regex_options.h>
#include <system/text/string_builder.h>
#include <system/text/unicode_encoding.h>
#include <system/text/utf32_encoding.h>
#include <system/text/utf7_encoding.h>
#include <system/text/utf8_encoding.h>
#include <system/threading/apartment_state.h>
#include <system/threading/auto_reset_event.h>
#include <system/threading/event_wait_handle.h>
#include <system/threading/interlocked.h>
#include <system/threading/manual_reset_event.h>
#include <system/threading/monitor.h>
#include <system/threading/mutex.h>
#include <system/threading/semaphore.h>
#include <system/threading/send_or_post_callback.h>
#include <system/threading/thread.h>
#include <system/threading/thread_pool.h>
#include <system/threading/thread_state.h>
#include <system/threading/timeout.h>
#include <system/threading/timer.h>
#include <system/threading/timer_queue.h>
#include <system/threading/wait_handle.h>
#include <system/timers/elapsed_event_args.h>
#include <system/timers/timer.h>
#include <system/timespan.h>
#include <system/timezone.h>
#include <system/timezone_info.h>
#include <system/tuple.h>
#include <system/type_code.h>
#include <system/type_info.h>
#include <system/type_info_ext.h>
#include <system/uint16.h>
#include <system/uint32.h>
#include <system/uint64.h>
#include <system/uri.h>
#include <system/uri_builder.h>
#include <system/uri_enum_types.h>
#include <system/uri_host_name_type.h>
#include <system/uri_parser.h>
#include <system/uri_partial.h>
#include <system/uri_shim.h>
#include <system/value_type.h>
#include <system/version.h>
#include <system/void.h>
#include <system/weak_ptr.h>
#include <system/weak_reference.h>
#include <system/web/http_utility.h>
#include <system/windows/forms/screen.h>