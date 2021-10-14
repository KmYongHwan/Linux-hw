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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb0e79c3, "nanddev_mtd_max_bad_blocks" },
	{ 0xdeacef1f, "mtd_ooblayout_get_databytes" },
	{ 0x42d9905f, "spi_mem_supports_op" },
	{ 0x98d2dbc0, "spi_mem_adjust_op_size" },
	{ 0xd6adcd3d, "nanddev_isreserved" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x283c8214, "devm_spi_mem_dirmap_create" },
	{ 0xec865859, "nanddev_isbad" },
	{ 0x9f791184, "mtd_ooblayout_set_databytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9a88e69, "nanddev_markbad" },
	{ 0xfb578fc5, "memset" },
	{ 0x23f8bd84, "mtd_ooblayout_count_freebytes" },
	{ 0x63e51d24, "spi_mem_driver_unregister" },
	{ 0xda59b0b1, "spi_mem_dirmap_write" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x5cdf5cd8, "nanddev_mtd_erase" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xf7dba81e, "mtd_device_parse_register" },
	{ 0x74e8afa4, "nanddev_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ec6844b, "nanddev_cleanup" },
	{ 0x7b225a87, "spi_mem_exec_op" },
	{ 0x81279a8a, "mtd_device_unregister" },
	{ 0xf839b8cd, "spi_mem_dirmap_read" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x5272bad, "spi_mem_driver_register_with_owner" },
};

MODULE_INFO(depends, "nandcore,mtd");


MODULE_INFO(srcversion, "13E83E5580F0052199C4CE0");
