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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xaa01c190, "tty_register_ldisc" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x24d273d1, "add_timer" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0x215a8ec8, "slhc_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf04187ce, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6c8f2de, "slhc_compress" },
	{ 0x15314fce, "consume_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4ed2acaa, "tty_chars_in_buffer" },
	{ 0x651df6f2, "dev_trans_start" },
	{ 0x9a5ae1ec, "tty_hangup" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe5bc9a53, "slhc_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x754d539c, "strlen" },
	{ 0xcdcc7c53, "tty_mode_ioctl" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xba312d7b, "current_task" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0x85fbc931, "slhc_uncompress" },
	{ 0xf102033e, "slhc_remember" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "10DFA6B2D989B92197EEC38");
