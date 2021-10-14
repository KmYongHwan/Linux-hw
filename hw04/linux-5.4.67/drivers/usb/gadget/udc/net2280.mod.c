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
	{ 0x722a53d5, "param_ops_ushort" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0xde843921, "usb_gadget_udc_reset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xddfad5ee, "usb_gadget_map_request" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x98d9b842, "usb_add_gadget_udc_release" },
	{ 0x20716107, "pci_try_set_mwi" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xbcc9914b, "usb_gadget_unmap_request" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6ae3996b, "usb_gadget_ep_match_desc" },
	{ 0xc253bc42, "gadget_find_ep_by_name" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x527e1bd8, "pci_disable_msi" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xedc03953, "iounmap" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x9286c9fc, "usb_del_gadget_udc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");

MODULE_ALIAS("pci:v000017CCd00002280sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000017CCd00002282sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000010B5d00002380sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000010B5d00003380sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000010B5d00003382sv*sd*bc0Csc03iFE*");

MODULE_INFO(srcversion, "1CDFAB71534FA3F88AA4822");
