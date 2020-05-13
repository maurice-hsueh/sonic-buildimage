#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe0272bd9, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe09d7d99, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x5d17af2f, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x4384aea9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xdb098cab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1b46cb2f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa8f14afc, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xaaa00383, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x3b36e70c, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xa75077b8, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x78f01130, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x5d081a34, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf18ed0dc, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:fm_6256_bn_f_psu");
