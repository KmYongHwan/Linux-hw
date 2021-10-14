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
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xa187fc9, "pcmcia_loop_config" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0xc5850110, "printk" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x87b8798d, "sg_next" },
	{ 0x37a0cba, "kfree" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa23C78A9Dpb0099E7F7pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa085A850Bpb45432EB8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pb21648F44pc*pd*");

MODULE_INFO(srcversion, "A75DC97975684FFE4EEA08E");
