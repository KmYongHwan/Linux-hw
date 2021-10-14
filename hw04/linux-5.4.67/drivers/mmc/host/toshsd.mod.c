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
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x88b896fa, "mmc_add_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x5dfc583d, "mmc_alloc_host" },
	{ 0x13799a9f, "mmc_free_host" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd14fbbf, "mmc_remove_host" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xc8333695, "mmc_detect_change" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x7896ccdc, "sg_miter_start" },
	{ 0xc5534d64, "ioread16" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xc773849f, "sg_miter_stop" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xde006432, "sg_miter_next" },
	{ 0x5e7f490d, "mmc_request_done" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001179d00000805sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "78995BCC0E7461C33DD6301");
