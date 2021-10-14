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
	{ 0xdf9c39b8, "dsa_tag_drivers_unregister" },
	{ 0x4e77c2da, "dsa_tag_drivers_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0x59a2f0ee, "packing" },
	{ 0x417d1fed, "dsa_8021q_rx_switch_id" },
	{ 0x9e59271d, "dsa_8021q_rx_source_port" },
	{ 0x61cfa3f3, "skb_pull_rcsum" },
	{ 0x61268118, "__skb_vlan_pop" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xac09bfd6, "dsa_defer_xmit" },
	{ 0x6cb050a1, "dsa_8021q_xmit" },
	{ 0xf34a297d, "netdev_txq_to_tc" },
	{ 0xe926856e, "dsa_8021q_tx_vid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core,tag_8021q");


MODULE_INFO(srcversion, "D0D57D20640A9C22AFB08EB");
