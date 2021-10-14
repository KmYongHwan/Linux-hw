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
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x8d4d8561, "pci_get_slot" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xfb578fc5, "memset" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xffb7c514, "ida_free" },
	{ 0x1f589e38, "platform_device_unregister" },
	{ 0xde006432, "sg_miter_next" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12b678d5, "platform_device_register" },
	{ 0x8cba6c0b, "devm_free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xf5ee1308, "platform_device_put" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001524d00000510sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "26ECB81F2148DE00456492B");
