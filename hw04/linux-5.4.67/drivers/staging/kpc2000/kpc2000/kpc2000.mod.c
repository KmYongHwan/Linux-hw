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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x1c7ec4a3, "pci_release_region" },
	{ 0xc1c9587a, "pci_write_config_word" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xb93527f1, "mfd_remove_devices" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xf0e16e2d, "uio_unregister_device" },
	{ 0xbe32b13b, "sysfs_create_files" },
	{ 0xa9263e2b, "pcie_capability_clear_and_set_word" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1d39a3c5, "_dev_notice" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6bb624d0, "mfd_add_devices" },
	{ 0xffb7c514, "ida_free" },
	{ 0x40fb4f1b, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x88e96942, "device_create" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x8c4b26, "sysfs_remove_files" },
	{ 0x37a0cba, "kfree" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x8f1e938c, "class_destroy" },
	{ 0x1aa8d2a8, "device_unregister" },
	{ 0x8fa8a174, "__uio_register_device" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x66414bc7, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x80fb2c60, "pci_request_region" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "uio");

MODULE_ALIAS("pci:v00001C33d00006021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C33d00004B03sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6A99B2AF91951AF47CA83D8");
