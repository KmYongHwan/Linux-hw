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
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x85bd1608, "__request_region" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf2413189, "scsi_dma_map" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001101d00001060sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EF2C16C2C421D697EE9CA4E");
