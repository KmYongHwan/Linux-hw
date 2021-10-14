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
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf2413189, "scsi_dma_map" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe484e35f, "ioread32" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{  0x87f87, "scsi_dma_unmap" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x3cb83d5b, "eeprom_93cx6_multireadb" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xede283d, "release_firmware" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x69acdf38, "memcpy" },
	{ 0x71deb539, "request_firmware" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "eeprom_93cx6");

MODULE_ALIAS("pci:v0000101Cd00003296sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EC8C85070556A161AFC48AE");
