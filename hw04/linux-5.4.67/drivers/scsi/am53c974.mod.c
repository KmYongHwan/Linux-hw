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
	{ 0xec3d93fc, "scsi_esp_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4a29ab38, "scsi_esp_intr" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xcfa0d077, "pci_iomap" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xdb097c76, "scsi_host_alloc" },
	{ 0x1d056c7a, "scsi_esp_template" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9ca2f355, "pci_read_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd9073be6, "pci_write_config_byte" },
	{ 0x348e033e, "scsi_esp_cmd" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x848d372e, "iowrite8" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xf10de535, "ioread8" },
	{ 0xed48b6ea, "scsi_host_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0xcbafa6b5, "pci_iounmap" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb9a48585, "scsi_esp_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "esp_scsi");

MODULE_ALIAS("pci:v00001022d00002020sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1FB80BCF227603A92B03E1A");
