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
	{ 0xf1a2f63d, "unregister_qdisc" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x5f9acab2, "register_qdisc" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x15314fce, "consume_skb" },
	{ 0xa48ac55f, "__neigh_event_send" },
	{ 0xaa93d096, "__neigh_create" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9198c918, "softnet_data" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x37dde473, "neigh_destroy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xe31c4d93, "neigh_lookup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf78e4447, "noop_qdisc" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x131ecf3a, "qdisc_reset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6CEAE89785AD5EABE918185");
