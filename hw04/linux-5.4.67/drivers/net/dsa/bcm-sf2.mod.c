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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xb4bb1972, "dsa_switch_resume" },
	{ 0x27c725d4, "flow_rule_match_ip" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x43f3f761, "flow_rule_match_ipv6_addrs" },
	{ 0x74e1adb5, "flow_rule_match_ports" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4d2f9ac4, "dsa_unregister_switch" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4354c4d5, "ethtool_rx_flow_rule_create" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x939f8e22, "b53_switch_alloc" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x45b1452a, "flow_rule_match_ipv4_addrs" },
	{ 0xefbd07b1, "dsa_switch_suspend" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x746e0714, "ethtool_rx_flow_rule_destroy" },
};

MODULE_INFO(depends, "dsa_core,b53_common");

MODULE_ALIAS("of:N*T*Cbrcm,bcm7445-switch-v4.0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7445-switch-v4.0C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.0C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.8");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.8C*");

MODULE_INFO(srcversion, "01388E0830BD8B1B0C41C93");
