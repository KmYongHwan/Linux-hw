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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x5e11012c, "pcmcia_enable_device" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0xeb302fde, "scsi_add_host_with_dma" },
	{ 0x188f9279, "qlogicfas408_queuecommand" },
	{ 0x7da5d7a, "pcmcia_register_driver" },
	{ 0x425251f9, "qlogicfas408_abort" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x946cde34, "pcmcia_request_io" },
	{ 0xc5850110, "printk" },
	{ 0xedfedd2e, "scsi_scan_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa187fc9, "pcmcia_loop_config" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0xe76b3b20, "qlogicfas408_get_chip_type" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x1f55cd70, "qlogicfas408_ihandl" },
	{ 0x37a0cba, "kfree" },
	{ 0xdc7e867e, "pcmcia_unregister_driver" },
	{ 0x3ea61469, "qlogicfas408_host_reset" },
	{ 0x153947c7, "scsi_remove_host" },
	{ 0xf2b95199, "qlogicfas408_setup" },
	{ 0x39962fa7, "qlogicfas408_biosparam" },
	{ 0xce0f8ba1, "pcmcia_disable_device" },
	{ 0x3eff28d0, "qlogicfas408_info" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "pcmcia,qlogicfas408");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa88395FA7pb33B7A5E6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD361772Fpb299D1751pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa20841B68pbAB3C3B6Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6534382ApbD67EEE79pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa18DF0BA0pb24662E8Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa82375A27pbF68E5BF7pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa82375A27pb68EACE54pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3FAEE676pb194250ECpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD77B2930pbA85B2735pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD77B2930pb70F8B5F8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3FAEE676pb81896B61pcF99F065Fpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa85C10E17pb1A2640C1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4585A1ApbA6F06EBEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4585A1Apb0A88DEA0pc*pd*");

MODULE_INFO(srcversion, "43DE8513532043DB0824EC6");
