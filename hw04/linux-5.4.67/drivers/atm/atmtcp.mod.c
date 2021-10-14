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
	{ 0x45f2f1a7, "deregister_atm_ioctl" },
	{ 0xf5eb2cce, "register_atm_ioctl" },
	{ 0x7ea19302, "put_device" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x9415ca79, "__module_get" },
	{ 0x7dca771, "atm_init_aal5" },
	{ 0xbf85c806, "vcc_insert_socket" },
	{ 0xd4008338, "atm_dev_lookup" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc5850110, "printk" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbdf81f69, "atm_alloc_charge" },
	{ 0xa9e31e3e, "atm_dev_register" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x15314fce, "consume_skb" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x1000e51, "schedule" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xba312d7b, "current_task" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2cc2d52d, "vcc_hash" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x44c6e633, "vcc_sklist_lock" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf720a60b, "module_put" },
	{ 0x16ce10d6, "atm_dev_deregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "ECC5DDD7DE84CDDC8771242");
