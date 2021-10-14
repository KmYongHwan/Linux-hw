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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7021fe18, "dma_direct_unmap_sg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x4de17ab3, "usb_state_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xfe736ff9, "kobject_uevent" },
	{ 0x56470118, "__warn_printk" },
	{ 0x282cdabc, "usb_led_activity" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2a186953, "bpf_trace_run3" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0xba312d7b, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb6f7270a, "device_add" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfd7ccba2, "sysfs_notify" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0x37a0cba, "kfree" },
	{ 0x3ecb7f7, "dma_direct_map_sg" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0x66414bc7, "__class_create" },
	{ 0xa637b975, "dma_ops" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2B89CB2C652BAEC5CF8896F");
