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
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x1c06f459, "genl_register_family" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x70691c99, "single_open" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x73adf88d, "dev_disable_lro" },
	{ 0x71227479, "genl_unregister_family" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa071f2c6, "single_release" },
	{ 0x9cb39373, "seq_puts" },
	{ 0xe0ca8433, "netdev_rx_handler_register" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0xc4142837, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa5976e4f, "dev_base_lock" },
	{ 0x8a5087f2, "call_netdevice_notifiers" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xe5121127, "debugfs_rename" },
	{ 0xcec6343e, "seq_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x91b9215a, "dev_get_by_index_rcu" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x53825c19, "netlink_unicast" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3785c132, "init_net" },
	{ 0x92e3370c, "rtnl_link_unregister" },
	{ 0x819cae46, "__dev_get_by_index" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x66593e48, "netlink_broadcast" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7d81681, "eth_header_parse" },
	{ 0xdc81e95a, "netdev_rx_handler_unregister" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0xff587612, "__pskb_copy_fclone" },
	{ 0xdd4dafc6, "netdev_state_change" },
	{ 0x876027a, "netlink_ack" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x7e9023a4, "dev_set_promiscuity" },
	{ 0x37a0cba, "kfree" },
	{ 0x789d8622, "genlmsg_put" },
	{ 0x8b6c571c, "rtnl_link_register" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xb0e602eb, "memmove" },
	{ 0xea08bafa, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2d5f37, "dev_queue_xmit" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xf84bf8c6, "eth_header" },
	{ 0x69668826, "netdev_increment_features" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0x4a8fc4ce, "dev_set_mtu" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5B28AF3E694443F69D4DC59");
