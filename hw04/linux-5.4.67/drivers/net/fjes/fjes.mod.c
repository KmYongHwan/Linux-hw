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
	{ 0x569abcca, "acpi_walk_resources" },
	{ 0x8818748e, "acpi_bus_register_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xdaddbd5a, "trace_handle_return" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x70691c99, "single_open" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0xa071f2c6, "single_release" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x6cb881cb, "acpi_bus_get_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc4142837, "seq_printf" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xeec78261, "acpi_bus_unregister_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x69e61a65, "trace_event_buffer_reserve" },
	{ 0x999e8297, "vfree" },
	{ 0x3d32ae7, "platform_device_register_full" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcec6343e, "seq_read" },
	{ 0x2a186953, "bpf_trace_run3" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbda3d4e9, "trace_define_field" },
	{ 0xfb578fc5, "memset" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x2f89cc53, "bpf_trace_run1" },
	{ 0xfe64b80a, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xb104128c, "trace_event_reg" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xf04187ce, "dev_close" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xce24f1a4, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0x93abe7cc, "trace_event_ignore_this_pid" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xc410e147, "trace_event_buffer_commit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x6e6709fd, "event_triggers_call" },
	{ 0x3a48c0e4, "bpf_trace_run2" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa42a5626, "trace_event_raw_init" },
	{ 0x651df6f2, "dev_trans_start" },
	{ 0xedc03953, "iounmap" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x527fb529, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x8888b156, "trace_seq_printf" },
	{ 0x15314fce, "consume_skb" },
	{ 0x4a5da3fa, "vmalloc_to_page" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x5daab43a, "__napi_alloc_skb" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x78b49955, "bpf_trace_run4" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x1e9b82be, "acpi_device_hid" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xcfb4a296, "trace_print_array_seq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0C02:*");

MODULE_INFO(srcversion, "66C2719E76594975B09609E");
