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
	{ 0x2d3385d3, "system_wq" },
	{ 0x9123cefc, "em28xx_read_reg" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xb3ade458, "rc_unregister_device" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x721f7cc7, "em28xx_free_device" },
	{ 0x51662b53, "em28xx_write_regs" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x9f1e215a, "i2c_transfer" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8156003, "em28xx_register_extension" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xe381324, "rc_allocate_device" },
	{ 0x5ada0011, "input_event" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xab746027, "em28xx_find_led" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xe93af497, "rc_free_device" },
	{ 0x39037f17, "em28xx_toggle_reg_bits" },
	{ 0x9ca01f8e, "rc_keydown" },
	{ 0x76ec27ca, "em28xx_unregister_extension" },
	{ 0x1e1c22e8, "rc_register_device" },
	{ 0x43dfedb5, "em28xx_write_reg_bits" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff76d558, "input_register_device" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xb17ff434, "i2c_transfer_buffer_flags" },
	{ 0x37a0cba, "kfree" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x83416353, "i2c_probe_func_quick_read" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7c3163f1, "em28xx_write_reg" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x921d7c65, "em28xx_boards" },
	{ 0xeebd5754, "input_allocate_device" },
};

MODULE_INFO(depends, "em28xx,rc-core");


MODULE_INFO(srcversion, "E094AB33D95D0157684DA56");
