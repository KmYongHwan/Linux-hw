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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x5084668d, "rt2x00lib_resume" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x9f5febc5, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb871c87f, "pci_set_mwi" },
	{ 0x86e641cd, "rt2x00lib_remove_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xd2b13065, "pci_clear_mwi" },
	{ 0x37a0cba, "kfree" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0x136b2332, "pci_choose_state" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xf0827afa, "rt2x00lib_probe_dev" },
	{ 0x942dfa71, "rt2x00lib_suspend" },
	{ 0x896845d2, "pci_save_state" },
};

MODULE_INFO(depends, "rt2x00lib,mac80211");


MODULE_INFO(srcversion, "C0CFF0F20CF7B9E0650CCCB");
