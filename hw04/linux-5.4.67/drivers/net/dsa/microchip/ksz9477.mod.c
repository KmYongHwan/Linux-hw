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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x23072ef8, "ksz_port_bridge_join" },
	{ 0x928f4f, "regmap_update_bits_base" },
	{ 0x61dfb399, "ksz_port_vlan_prepare" },
	{ 0x15e20625, "ksz_get_ethtool_stats" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xfabcb2c8, "ksz_init_mib_timer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x2fde583c, "ksz_switch_register" },
	{ 0xcc7fac7f, "ksz_port_bridge_leave" },
	{ 0xfb578fc5, "memset" },
	{ 0xe64ea93a, "phy_remove_link_mode" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x944e1261, "ksz_update_port_member" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x72b62ead, "ksz_adjust_link" },
	{ 0x181b2f6, "ksz_port_mdb_prepare" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x43cd1ffb, "ksz_port_fast_age" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x122e3035, "ksz_disable_port" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbb0ac520, "ksz_enable_port" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x1e90d16, "ksz_sset_count" },
};

MODULE_INFO(depends, "ksz_common");


MODULE_INFO(srcversion, "95EF687B4EDC393B4C54B98");
