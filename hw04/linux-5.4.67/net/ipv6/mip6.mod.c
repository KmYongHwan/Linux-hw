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
	{ 0x3fb9e433, "rawv6_mh_filter_unregister" },
	{ 0xf4ab071, "xfrm_unregister_type" },
	{ 0x2baa9ac, "rawv6_mh_filter_register" },
	{ 0xdded2805, "xfrm_register_type" },
	{ 0x12f43a55, "icmpv6_send" },
	{ 0xae4bd1fb, "skb_copy_bits" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x63cd15ca, "km_report" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x9964e240, "ipv6_find_tlv" },
	{ 0xc5850110, "printk" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "93321DB396AAC10C837F151");
