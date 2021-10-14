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
	{ 0xc373a5d1, "no_llseek" },
	{ 0xa86d5b90, "input_unregister_handler" },
	{ 0xcfad6a55, "input_register_handler" },
	{ 0x4537b65d, "input_open_device" },
	{ 0xe4f5a219, "stream_open" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xb2048e50, "input_match_device_id" },
	{ 0xc5850110, "printk" },
	{ 0x523c78db, "cdev_device_add" },
	{ 0x40748904, "cdev_init" },
	{ 0xccb201a5, "input_register_handle" },
	{ 0x2af970a3, "device_initialize" },
	{ 0xdf52fb14, "input_class" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x963cf8c8, "get_device" },
	{ 0x4e83cd98, "dev_set_name" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xc0ff21c1, "input_get_new_minor" },
	{ 0xc95ae1ab, "input_unregister_handle" },
	{ 0x5cf53ce2, "input_free_minor" },
	{ 0x69c3d482, "cdev_device_del" },
	{ 0x21fca503, "input_close_device" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4d5f3b25, "kill_fasync" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1000e51, "schedule" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x754d539c, "strlen" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ea19302, "put_device" },
	{ 0x2864d614, "fasync_helper" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*0,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*2,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*8,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*3,*k*r*a*6,*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*120,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*130,*r*a*m*l*s*f*w*");
MODULE_ALIAS("input:b*v*p*e*-e*1,*k*2C0,*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "8F2ECAEAD99867414C85442");
