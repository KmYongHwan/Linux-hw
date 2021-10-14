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
	{ 0xea4c5e82, "register_netdevice" },
	{ 0x10347159, "devlink_port_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x35db28d0, "bus_register" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x710fd4e8, "devlink_reload_enable" },
	{ 0xf44a972b, "driver_register" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x67a6d18, "xdp_attachment_flags_ok" },
	{ 0x8a954914, "devlink_reload_disable" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x70691c99, "single_open" },
	{ 0x1f563160, "bpf_offload_dev_priv" },
	{ 0xbb3eea6e, "devlink_param_driverinit_value_get" },
	{ 0xc0163adb, "bpf_offload_dev_create" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x1b6314fd, "in_aton" },
	{ 0xa071f2c6, "single_release" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8a71a227, "xdp_attachment_query" },
	{ 0x15280b63, "bpf_offload_dev_netdev_unregister" },
	{ 0xc45bd674, "devlink_resource_size_get" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc4142837, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb29f9277, "devlink_resources_unregister" },
	{ 0x8bd5e0de, "devlink_traps_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd8415bdc, "devlink_alloc" },
	{ 0x35eb7109, "devlink_params_register" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xbe4c9a58, "xdp_attachment_setup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0xcec6343e, "seq_read" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x3e04648d, "devlink_trap_report" },
	{ 0xe31ef352, "debugfs_create_u32" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x776fe93b, "unregister_pernet_subsys" },
	{ 0x785dd9f2, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x696db9bc, "devlink_resource_occ_get_register" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5c160d82, "devlink_params_publish" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x44a0f1d1, "bpf_offload_dev_match" },
	{ 0xfc3bba0f, "unregister_fib_notifier" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd22d728, "devlink_region_snapshot_create" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0x66023a3a, "debugfs_create_bool" },
	{ 0x3785c132, "init_net" },
	{ 0xdf752ab4, "bus_unregister" },
	{ 0x85a04ea2, "devlink_port_unregister" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x352ec68b, "bpf_offload_dev_destroy" },
	{ 0xe302eb4e, "devlink_param_driverinit_value_set" },
	{ 0xa5ae863e, "devlink_region_create" },
	{ 0x3fb884fb, "flow_block_cb_setup_simple" },
	{ 0x903155c8, "devlink_flash_update_begin_notify" },
	{ 0xe1c319ec, "devlink_flash_update_end_notify" },
	{ 0x4fbfffa4, "bpf_verifier_log_write" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x7b639536, "devlink_resource_register" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x71fc71e9, "devlink_flash_update_status_notify" },
	{ 0x6b542969, "register_pernet_subsys" },
	{ 0xc50ae716, "devlink_traps_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xd40c4eda, "devlink_free" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x925c248c, "devlink_port_type_clear" },
	{ 0x2075ed1, "devlink_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x519cc65b, "devlink_region_shapshot_id_get" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5d8789ab, "devlink_port_attrs_set" },
	{ 0x11e41db2, "devlink_params_unregister" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0x25810ec3, "debugfs_create_symlink" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x15314fce, "consume_skb" },
	{ 0x6cff3b90, "register_fib_notifier" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xa410a295, "devlink_region_destroy" },
	{ 0x33a1ba14, "devlink_unregister" },
	{ 0xfe885d93, "bpf_offload_dev_netdev_register" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xaed0008d, "devlink_port_type_eth_set" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "255932B141AE0DDBE61D4EB");
