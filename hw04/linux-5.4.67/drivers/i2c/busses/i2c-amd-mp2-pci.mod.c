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
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xa625ec51, "__pm_runtime_use_autosuspend" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x35a9a1d9, "device_match_any" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xaa768b46, "pm_runtime_allow" },
	{ 0x8e12dcca, "pm_runtime_forbid" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x90b8d10f, "pci_clear_master" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x7efb8de5, "driver_find_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc3e0dc78, "pci_intx" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x89c33339, "pm_runtime_set_autosuspend_delay" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x896845d2, "pci_save_state" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001022d000015E6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CD91CE64A56BF5C8B8312D7");
