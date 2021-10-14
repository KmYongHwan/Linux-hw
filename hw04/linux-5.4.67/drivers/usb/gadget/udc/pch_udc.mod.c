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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xde843921, "usb_gadget_udc_reset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xaf01bb80, "usb_add_gadget_udc" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x754e62f4, "dma_pool_create" },
	{ 0x20716107, "pci_try_set_mwi" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0x1d0b5393, "pci_enable_msi" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0xf82a295d, "gpiod_direction_input" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc5850110, "printk" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x9286c9fc, "usb_del_gadget_udc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37a0cba, "kfree" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe8ca8933, "gpiod_get_raw_value" },
	{ 0x91226d06, "gpio_to_desc" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");

MODULE_ALIAS("pci:v00008086d00000939sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v00008086d00008808sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000010DBd0000801Dsv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000010DBd00008808sv*sd*bc0Csc03iFE*");

MODULE_INFO(srcversion, "940E51A81F1865773460F29");
