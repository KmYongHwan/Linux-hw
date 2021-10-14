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
	{ 0xe3e53082, "pci_read_config_dword" },
	{ 0xaf45d87b, "pci_write_config_dword" },
	{ 0xc5850110, "printk" },
	{ 0xf1b00237, "pci_enable_rom" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x74c91105, "pci_disable_rom" },
	{ 0xedc03953, "iounmap" },
	{ 0xf7dba81e, "mtd_device_parse_register" },
	{ 0x886271e5, "do_map_probe" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x37a0cba, "kfree" },
	{ 0xf0d1a95, "map_destroy" },
	{ 0x81279a8a, "mtd_device_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd,chipreg");

MODULE_ALIAS("pci:v00008086d0000530Dsv*sd*bc05sc80i*");
MODULE_ALIAS("pci:v00001011d00001065sv00000000sd00000000bc*sc*i*");

MODULE_INFO(srcversion, "BFA52B5AF0BDCE92FA73A05");
