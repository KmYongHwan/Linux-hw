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
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x213b9651, "comedi_buf_write_free" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x47b05bb0, "comedi_inc_scan_progress" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7ea19302, "put_device" },
	{ 0xce314861, "comedi_bytes_per_scan" },
	{ 0xd768db80, "comedi_buf_read_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x4d87e644, "pci_ioremap_bar" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x963cf8c8, "get_device" },
	{ 0xb50051b0, "comedi_to_pci_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0xca5d2fcb, "comedi_buf_write_alloc" },
	{ 0xedc03953, "iounmap" },
	{ 0xa3dfb941, "comedi_buf_read_free" },
};

MODULE_INFO(depends, "comedi,comedi_pci");


MODULE_INFO(srcversion, "1ECD91AD430E45EA91B1C76");
