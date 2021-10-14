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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x6ac36405, "phy_init" },
	{ 0xd45d73c4, "ata_dummy_port_ops" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0x815588a6, "clk_enable" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x18e99139, "ahci_save_initial_config" },
	{ 0xaab7fcf, "regulator_disable" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xd13f4e80, "ata_host_suspend" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc599a7de, "ahci_reset_em" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x3c4fdd9b, "ata_host_resume" },
	{ 0xa0ca6ab9, "phy_set_mode_ext" },
	{ 0x2e4cde64, "ata_port_desc" },
	{ 0x7cfd592b, "devres_alloc_node" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0xa5c0017, "ata_host_alloc_pinfo" },
	{ 0x726e8b16, "phy_power_off" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x9f127c97, "ahci_print_info" },
	{ 0x2834c78e, "devres_open_group" },
	{ 0x63fd46c1, "phy_power_on" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x1e40cc4f, "ahci_reset_controller" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfd1f31f7, "devm_regulator_get" },
	{ 0xc645475b, "phy_exit" },
	{ 0x5f2aad1d, "ahci_host_activate" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4b7f1992, "ahci_init_controller" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0cf1339, "devm_reset_control_array_get" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5680b13c, "devres_add" },
	{ 0xc54e0acc, "ahci_set_em_messages" },
	{ 0xe4413db4, "clk_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xc1573d6a, "regulator_put" },
	{ 0x242da8d6, "devm_of_phy_get" },
	{ 0x34c6f25e, "devres_remove_group" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xeb561ef, "regulator_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8742c6dd, "devres_release_group" },
	{ 0x1fa8ea04, "regulator_enable" },
	{ 0xb7d80f3c, "ahci_ops" },
};

MODULE_INFO(depends, "libahci");


MODULE_INFO(srcversion, "333523289ECBA528464FBF8");
