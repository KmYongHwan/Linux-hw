#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x77179d2e, "param_ops_string" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x837a48c7, "device_wakeup_disable" },
	{ 0xa4faf62a, "acpi_disable_gpe" },
	{ 0x9d099a39, "acpi_remove_gpe_handler" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x66023a3a, "debugfs_create_bool" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0xe67878c0, "devm_led_classdev_register_ext" },
	{ 0x37a0cba, "kfree" },
	{ 0xe909e0e4, "efivar_entry_get" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2677f884, "device_wakeup_enable" },
	{ 0xb97f7045, "acpi_install_gpe_handler" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6adc7c14, "acpi_dev_get_property" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa07a37f0, "memchr" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0xe3f9339c, "input_mt_sync_frame" },
	{ 0x95f1e7a8, "input_mt_report_slot_state" },
	{ 0x5ada0011, "input_event" },
	{ 0x74b36a91, "input_mt_assign_slots" },
	{ 0x19df99b9, "acpi_finish_gpe" },
	{ 0x1344d7e6, "acpi_enable_gpe" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xff76d558, "input_register_device" },
	{ 0x224e3827, "input_mt_init_slots" },
	{ 0x6cc0246e, "input_set_abs_params" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x71af84e7, "devm_input_allocate_device" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x81b03377, "efivar_entry_set_safe" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x754d539c, "strlen" },
	{ 0xf5cb9fdc, "nonseekable_open" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x25334866, "spi_async" },
	{ 0xbd6841d4, "crc16" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0x78b49955, "bpf_trace_run4" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x61520529, "trace_print_symbols_seq" },
	{ 0xc7d16b61, "trace_print_hex_seq" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:APP000D:*");

MODULE_INFO(srcversion, "082E232E63CE9A76EC9E16D");
