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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x449f802, "deregister_mtd_blktrans" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6b36b4f2, "register_mtd_blktrans" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x1f6ca540, "add_mtd_blktrans_dev" },
	{ 0x754d539c, "strlen" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xff29dadd, "mtd_erase" },
	{ 0x4cd7de4, "mtd_write_oob" },
	{ 0xa43d1c72, "__nand_correct_data" },
	{ 0xb636dd73, "__nand_calculate_ecc" },
	{ 0xb225da10, "mtd_read_oob" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x37a0cba, "kfree" },
	{ 0xfc69758f, "del_mtd_blktrans_dev" },
	{ 0x9166fada, "strncpy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd_blkdevs,mtd,nand_ecc");


MODULE_INFO(srcversion, "47FE7AEC96276E2D4AB99D0");
