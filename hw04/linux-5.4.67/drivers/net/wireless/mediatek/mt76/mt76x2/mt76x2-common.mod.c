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
	{ 0xd223bed3, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x35b77095, "mt76x02_phy_set_txpower" },
	{ 0x9307ab1, "mt76x02_mcu_calibrate" },
	{ 0xd39cdec5, "mt76x02_eeprom_copy" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7fa6fcbd, "mt76x02_get_lna_gain" },
	{ 0x735e2e65, "mt76_eeprom_override" },
	{ 0x1567ae4f, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x39518ca0, "mt76_eeprom_init" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0xe2c51b2e, "mt76x02_get_rx_gain" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xed9319d5, "mt76x02_get_efuse_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xae1163d4, "mt76x02_ext_pa_enabled" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xfbca01ef, "mt76x02_phy_dfs_adjust_agc" },
	{ 0xd07f0b7b, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76,mt76x02-lib");


MODULE_INFO(srcversion, "91924EBDDD2AC31A6CA8189");
