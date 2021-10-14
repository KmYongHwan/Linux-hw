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
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xe93f923f, "regmap_bulk_read" },
	{ 0xfabcb2c8, "ksz_init_mib_timer" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2057f44d, "regmap_bulk_write" },
	{ 0xb2c20827, "regmap_read" },
	{ 0x2fde583c, "ksz_switch_register" },
	{ 0xcc7fac7f, "ksz_port_bridge_leave" },
	{ 0x97ec2d11, "ksz_port_mdb_add" },
	{ 0xfb578fc5, "memset" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x944e1261, "ksz_update_port_member" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x72b62ead, "ksz_adjust_link" },
	{ 0xe5083792, "ksz_port_mdb_del" },
	{ 0x181b2f6, "ksz_port_mdb_prepare" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x43cd1ffb, "ksz_port_fast_age" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x122e3035, "ksz_disable_port" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb4cd40f0, "ksz_phy_read16" },
	{ 0xbb0ac520, "ksz_enable_port" },
	{ 0xc8c3f580, "ksz_port_fdb_dump" },
	{ 0xa03e7f31, "ksz_phy_write16" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xeb5bce08, "regmap_write" },
	{ 0x1e90d16, "ksz_sset_count" },
};

MODULE_INFO(depends, "ksz_common");


MODULE_INFO(srcversion, "C3A9886F119A237BF5EDDDF");
