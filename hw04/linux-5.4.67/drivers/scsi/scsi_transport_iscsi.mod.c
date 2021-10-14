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
	{ 0x80868ed7, "transport_class_register" },
	{ 0x4de8d7ee, "class_find_device" },
	{ 0x35db28d0, "bus_register" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x2d6e4a02, "scsi_remove_target" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf9d843e4, "scsi_host_lookup" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x56470118, "__warn_printk" },
	{ 0x20592044, "transport_destroy_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xf0b30789, "attribute_container_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3a5f56f, "scsi_scan_target" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xb6a11f8, "scsi_is_host_device" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x4f6dbf8e, "device_del" },
	{ 0x785dd9f2, "device_register" },
	{ 0x84e1777c, "scsi_queue_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2e0c5381, "transport_add_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3963cf1a, "device_find_child" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x548bc933, "class_unregister" },
	{ 0x688bd4df, "netlink_kernel_release" },
	{ 0xffb7c514, "ida_free" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0x4beaf2ec, "attribute_container_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0xb6f7270a, "device_add" },
	{ 0xb18156be, "skb_pull" },
	{ 0xda6ec6cc, "transport_class_unregister" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x3785c132, "init_net" },
	{ 0x3cdf68c7, "__class_register" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xf720a60b, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0x5f4c3621, "scsi_target_unblock" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xa3130988, "scsi_host_get" },
	{ 0x66593e48, "netlink_broadcast" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0x7ea19302, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe6492f49, "transport_setup_device" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x963cf8c8, "get_device" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0x74fb69f1, "__scsi_init_queue" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0x250c1a52, "device_for_each_child" },
	{ 0xa469a2d, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x2af970a3, "device_initialize" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x5d14d1b1, "transport_remove_device" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x129de197, "scsi_target_block" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x2bd183b2, "bsg_job_done" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0xc829a825, "bsg_remove_queue" },
	{ 0x1f259270, "bsg_setup_queue" },
	{ 0xf7a7b291, "__nlmsg_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5AE144E50E137DFB16045DE");
